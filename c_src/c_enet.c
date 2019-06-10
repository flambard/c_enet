#include <erl_nif.h>
#include <enet/enet.h>

static ERL_NIF_TERM init(ErlNifEnv* env, int argc, const ERL_NIF_TERM argv[])
{
  return enet_initialize() == 0
    ? enif_make_atom_len(env, "ok", 2)
    : enif_make_atom_len(env, "error", 5);
}


static ErlNifFunc nif_funcs[] =
  {
   {"init", 0, init}
  };

ERL_NIF_INIT(c_enet, nif_funcs, NULL, NULL, NULL, NULL)
