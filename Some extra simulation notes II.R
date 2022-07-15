

######################################################
# Accept-reject
######################################################
# Define target pdf
f <- function(x) {
  return(ifelse((x < 0 | x > 2*pi), 0, (sin(x)+2)/(4*pi)))
}

# Plotting target pdf
x <- seq(-1,7,length=1000)
plot(x,f(x),type="l",ylim=c(-.1,.3))
abline(h=0)
abline(v=pi/2,col="purple")

# Define envelope
e <- function(x) {
  return(ifelse((x < 0 | x > 2*pi), Inf, f(pi/2)))
}
lines(x,e(x),col="pink")

# Create simulation function my_target()
my_target <- function(n.samps=1000) {
  #n.samps <- 1000   # number of samples desired
  n       <- 0		     # counter for number samples accepted
  samps   <- numeric(n.samps) # initialize the vector of output
  while (n < n.samps) {
    y <- runif(1,min=0,max=2*pi)    #random draw from g
    u <- runif(1)
    if (u < f(y)/e(y)) {
      n        <- n + 1
      samps[n] <- y
    }
  }
  return(samps)
}

# Plot histogram with true pdf
hist(my_target(10000),prob=T,breaks=30,xlim=c(-.5,2*pi+.5))
lines(x,f(x),col="blue")


######################################################
# Monte Carlo Int
######################################################

# plot quarter circle
circle.seq <- seq(0,1,length=100)
plot(circle.seq,sqrt(1-circle.seq^2),type="l",col="green",lwd=2)

# Approximate area under curve
# n = 100
X <- runif(100)
mean(sqrt(1-X^2)/1)
4*mean(sqrt(1-X^2)/1)

# n = 100000
X <- runif(100000)
mean(sqrt(1-X^2)/1)
4*mean(sqrt(1-X^2)/1)
















