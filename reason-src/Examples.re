let exceptionCase = _ => {
    raise(Not_found)
};

let callbackLastLineCase = callback => {
    ();
    callback();
}

let unitLastLineCase = callback => {
    callback();
    ();
}
