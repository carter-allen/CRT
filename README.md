# CRT
## Generation of Chinese Restaurant Table Random Variables with C++

This package includes one function for fast generation of CRT random variables. 

## Installation

```{r, eval=FALSE}
devtools::install_github("carter-allen/CRT")
```

## Use

```{r}
library(CRT)
y <- sample(1:100,100)
r <- 1.5
l <- crt(y,r)
```
