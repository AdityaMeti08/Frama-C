# Frama-C
All important frama-c codes


ABOUT FRAMA-C


What is Frama-C?
Frama-C is a suite of tools dedicated to the analysis of the source code of software written in C (or C++, via an experimental front-end).

Frama-C gathers several static and dynamic analysis techniques in a single collaborative framework. The collaborative approach of Frama-C allows static analyzers to build upon the results already computed by other analyzers in the framework.

Static Analysis?
Static analysis of source code is the science of computing synthetic information about the source code without executing it.

To most programmers, static analysis means measuring the source code with respect to various metrics (examples are the number of comments per line of code and the depth of nested control structures). This kind of syntactic analysis can be implemented in Frama-C but it is not the focus of the project.

Others may be familiar with heuristic bug-finding tools. These tools take more of an in-depth look at the source code and try to pinpoint dangerous constructions and likely bugs (locations in the code where an error might happen at run-time). These heuristic tools do not find all such bugs, and sometimes they alert the user for constructions which are in fact not bugs.

Frama-C is closer to these heuristic tools than it is to software metrics tools, but it has two important differences with them: it aims at being correct, that is, never to remain silent for a location in the source code where an error can happen at run-time. And it allows its user to manipulate functional specifications, and to prove that the source code satisfies these specifications.

Frama-C is not the only correct static analyzer out there, but analyzers of the “correct” family are less widely known and used. Software metrics tools do not guarantee anything about the behavior of the program, only about the way it is written. Heuristic bug-finding tools can be very useful, but because they do not find all bugs, they can not be used to prove the absence of bugs in a program. Frama-C on the other hand can guarantee that there are no bugs in a program (“no bugs” meaning either no possibility of a run-time error, or even no deviation from the functional specification the program is supposed to adhere to). This of course requires more work from the user than heuristic bug-finding tools usually do, but some of the analyses provided by Frama-C require comparatively little intervention from the user, and the collaborative approach proposed in Frama-C allows the user to get some impressive results.

You may now want to go on to the description of Frama-C’s features, to a page with more details about its modular, extensible architecture, or you may want to see Frama-C in action on an example.


