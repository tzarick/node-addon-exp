#include <node_api.h>

namespace addonViaNodeApi
{
  napi_value Method(napi_env env, napi_callback_info args)
  {
    napi_value ahoyGreeting;
    napi_status status;

    status = napi_create_string_utf8(env, "ahoy m8y, please walk the plank...", NAPI_AUTO_LENGTH, &ahoyGreeting);

    if (status != napi_ok)
      return nullptr;
    return ahoyGreeting;
  }

  napi_value init(napi_env env, napi_value exports)
  {
    napi_status status;
    napi_value fn;

    status = napi_create_function(env, nullptr, 0, Method, nullptr, &fn);

    if (status != napi_ok)
      return nullptr;

    status = napi_set_named_property(env, exports, "greeting", fn);
    if (status != napi_ok)
      return nullptr;
    return exports;
  }

  NAPI_MODULE(NODE_GYP_MODULE_NAME, init);
}
