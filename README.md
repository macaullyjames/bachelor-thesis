# bachelor-thesis

The LaTeX source for my bachelor thesis in computer science, _"Anti-analysis techniques to weaken author classification accuracy in compiled executables"_, co-authored with [@johanwik](https://github.com/johanwik). This work was presented at the KTH Royal Institute of Technology in May 2016. Michael Schliephake was our supervisor.

The full thesis in PDF format can be found [here](thesis.pdf).

>
###Abstract
>
Programming languages such as C/C++ allow for great flexibility in how code can be written. This leads to programmers developing their own “code style” that can be used to identify them among a group of other programmers in a setting such as a programming competition. Recent research has shown that some of the identifying stylistic features present in source code survive the compilation process, and that authorship classification can be performed on the compiled executables alone. This was originally performed by Rosenblum et al. in their 2011 paper on the subject.
>
This thesis takes the approach of Rosenblum et al. and investigates how the author classification process is affected by changes in the compilation process of the training dataset, specifically different levels of optimisation (-O1 to -O3) and static linkage. We find that full optimisation yields a 10% drop in accuracy in datasets with 413 and 20 authors respectively. Static linkage results in a significant drop in accuracy in datasets with 20 and 10 authors, respectively. In both cases, the classifiers still perform significantly better than random chance and as such these methods cannot guarantee anonymity to the programmer. It is not clear how these results translate to other datasets, although there is reason to believe they would be reproducible using other classifiers found in the literature.
