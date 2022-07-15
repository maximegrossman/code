
########################################
# Rolling a six-sided die
########################################
# Simulate a fair six-sided die using sample()
n <- 1000
x <- sample(1:6,n,replace=T)
x
table(x)/n

# Simulate a fair six-sided die using runif()
n <- 100
U <- runif(n)
x <- floor(6*U)+1
# or x <- ceiling(6*U)
head(x)
table(x)/n

# Simulate a fair six-sided die using uniform
# based on the LCG
seed <- 10
new.random <- function(a = 5, c = 12, m = 16) {
  out <- (a*seed + c) %% m
  seed <<- out 
  return(out)
}

my_unif <- function(n) {
  out.length <- n
  variants   <- rep(NA, out.length)
  for (i in 1:out.length) {
  variants[i] <- new.random(a=1664545, c=1013904223, 
                            m=2^32)
  }
  return(variants/2^(32))
}
n <- 1000
x <- floor(6*my_unif(n=n))+1
head(x)
table(x)/n

########################################
# Inverse transform plot
########################################
# Draw from cont dist
n <- 50
X <- rnorm(n)
Y <- pnorm(X)

x.plot <- seq(-5,5,length=1000)
plot(x.plot,pnorm(x.plot),type="l",
     ylim=c(-.2,1.2),
     xlab="X",
     ylab="F(X)")
abline(h=c(0,1),lty=2)
lines(x.plot,dnorm(x.plot),col="green")
points(X,rep(0,n),col="green",pch=19,cex=.5)
segments(x0=X,y0=rep(0,n),
         x1=X,y1=Y,col="grey",lwd=.5)
points(X,Y,col="red",pch=19,cex=.5)
segments(x0=rep(-4.5,n),y0=Y,
         x1=X,y1=Y,col="red",lwd=.5)
points(rep(-4.5,n),Y,col="red",pch=19,cex=.5)

# Plot histogram of Y=F(X)
hist(Y)

########################################
# Inverse transform
# Exponential
########################################
# Simulate an exponential(lambda=2) random variable
# based on the LCG and inverse-transform
n <- 10000
Y <- my_unif(n=n)
X <- -1/2*log(1-Y)
head(X)
hist(X,breaks=30)

# Fancy plot 
n <- 10
Y <- my_unif(n=n)
X <- -1/2*log(1-Y)

x.plot <- seq(-2,5,length=1000)
plot(x.plot,pexp(x.plot,rate=2),type="l",
     ylim=c(-.2,2),
     xlab="X",
     ylab="F(X)")
abline(h=c(0,1),lty=2)
lines(x.plot,dexp(x.plot,rate=2),col="green")
points(X,rep(0,n),col="green",pch=19,cex=.5)
segments(x0=X,y0=rep(0,n),
         x1=X,y1=Y,col="grey",lwd=.5)
points(X,Y,col="red",pch=19,cex=.5)
segments(x0=rep(-1,n),y0=Y,
         x1=X,y1=Y,col="red",lwd=.5)
points(rep(-1,n),Y,col="red",pch=19,cex=.5)
