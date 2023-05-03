# QuizMakeup

This is a program to make up for the last few questions of the Pointers quiz! The program should be functional and does not only what was required, but also includes lines of code in order to ensure that each Instrument object has the proper amount of strings and is tuned/not tuned according to the requirements.
I will admit that I was not able to figure out how to keep track of how many objects have been destroyed, but I was able to figure out a way to keep track of how many Instrument objects were created!

To do this, I created a static integer variable (named instrumentCount) outside of the main function so that the variable would be able to remain throughout the lifetime of the entire program, thus able to count Instruments at any given point across the program's lifespan. Whenever the Instrument Class' constructor is called, the value of the static variable will increase by one. Due to the fact that Instrument objects inst1 and inst2 are created in main, however, this means that they will only be destroyed when the main function ends. Functionally, this means that it is impossible to count how many objects are destroyed, since main is what drives the program, kind of like a car's engine.

I would imagine that a possible solution to this would be somehow creating the Instrument objects in a different function, which would then allow for them to be destroyed before the end of the main function. I was not sure of how to do this myself. But I figured that I did my best and fulfilled the requirements of this task as best I could. I hope it is acceptable and that this redeems some of the points that I lost! It was very nice to prove to myself that I know how to code in C++, even if my test scores aren't that great.

Thank you for this semester! I hope to use C++ an exceptionally large amount in the future.
