print("Hello")

a <- 5
b <- 45

c <- a+b

print(c)

x <- 30L
if(is.integer(x)) {
  print("X is an Integer")
}

if (c>20) {
  print("Greater than 20")
}else{
  print("Less than 20")
}

x <- switch(
  3,
  "first",
  "second",
  "third",
  "fourth"
)
