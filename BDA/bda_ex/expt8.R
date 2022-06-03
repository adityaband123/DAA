library(ggplot2)
library(dplyr)
library(ggfortify)

summary(iris)
head(iris)

data <- select(iris, c(1:4))

kmean <- kmeans(data, 2)
kmean$centers
autoplot(kmean, data, frame = TRUE) # Rplot-1

kmean <- kmeans(data, 3)
kmean$centers
autoplot(kmean, data, frame = TRUE) # Rplot-2