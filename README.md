```npm install -g esy```

```esy```

I have the same example in both Reason and oCaml. You can run each version with the corresponding command below.

```esy x ReproOCaml.exe```

```esy x ReproOReason.exe```

The code of interest can be found in the (language)-src directories. Essentially the problem seems to be that the stacktrace information for the caller is erased prior to a callback returning. If the callback wants to record information about the caller, it cannot do so in this case. Adding a simple unit after invoking the callback in the caller resolves this issue. This does not seem to occur with exceptions.
