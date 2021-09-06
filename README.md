# node-addon-exp
[C++ Node addon](https://nodejs.org/api/addons.html) experimentation.

Two pirate-themed node addons here:
- one using the [V8](https://v8.dev/) lib directly
- the other using [Node Api](https://nodejs.org/api/n-api.html#n_api_node_api), which creates an extra layer b/t the addon and underlying engine, meaning it may be more stable across different versions of node/V8
