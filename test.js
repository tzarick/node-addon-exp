const addon_v8 = require('./build/Release/addonDirectlyToV8.node');
const addonNapi = require('./build/Release/addonViaNodeApi.node');

console.log(addon_v8.greeting()); // expected: "Ahoy m8y! Welcome aboard."
console.log(addonNapi.greeting()); // expected: "ahoy m8y, please walk the plank..."
