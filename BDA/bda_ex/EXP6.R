# PLOT
plot(1,3)

plot(c(1,8),c(3,10))

plot(c(1,2,3,4,5), c(3,7,8,9,12))

x<- c(1,2,3,4,5)
y<- c(3,7,8,9,12)
plot(x,y)

plot(1:10)

#Type
plot(1:10,type = "l")

#Label
plot(1:10, main = "My Graph", xlab = "The x-axis", ylab = "The y-axis")

#color
plot(1:10, col = "blue")

#Points size
plot(1:10, cex =2)

plot(1:10, pch = 15, cex = 2)


# LINE

plot(1:10, type ="l")

plot(1:10, type ="l", col="purple")

plot(1:10, type ="l", lwd=2)

#line type
plot(1:10, type ="l", lwd = 5, lty =3)

line1 <- c(1,2,3,4,5,10)
line2 <- c(2,5,7,8,9,10)
plot(line1,type="l", col = "blue")

lines(line2, type ="l", col = "red")

# Pie Chart

x <- c(10,20,30,40)
pie(x)

pie(x, init.angle = 90)

mylabel <- c("Apples", "Bananas", "Cherries", "Dates")
pie(x,label = mylabel, main = "Fruits")

colors <- c("blue", "yellow", "green", "black")
pie(x, label = mylabel , main="Fruits", col =colors)

#legend
legend("bottomright", mylabel, fill = colors)

# Pie3D
library(plotrix)
pie3D(x,labels = mylabel, main ="Fruits", col = colors, explode = 0.1)


# Bars
x <- c("A", "B", "C", "D")
y <- c(1,2,3,4)
barplot(y, names.arg = x)

barplot(y, names.arg = x, col = "red")

barplot(y, names.arg = x, col = "yellow", border = "brown")

barplot(y, names.arg = x, density =25)

barplot(y, names.arg = x, width = c(1,2,3,4))

barplot(y, names.arg = x, horiz = TRUE)

barplot(y, names.arg = x, col ="red", main = "Title", xlab ="x-axis", ylab = "y-axis")
