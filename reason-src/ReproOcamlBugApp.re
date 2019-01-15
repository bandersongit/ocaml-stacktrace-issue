print_endline("\nexception behavior:\n");
ExampleFramework.run(Examples.exceptionCase);
print_endline("\nworks as expected:\n");
ExampleFramework.run(Examples.unitLastLineCase);
print_endline("\ndoes not have the Examples file in the stack trace:\n");
ExampleFramework.run(Examples.callbackLastLineCase);
