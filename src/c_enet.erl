-module(c_enet).

-export([
        ]).

-on_load(on_load/0).

on_load() ->
    Path = code:priv_dir(c_enet) ++ "/c_enet",
    LoadInfo = 0,
    ok = erlang:load_nif(Path, LoadInfo),
    ok = init().

init() ->
    nif_not_loaded.


