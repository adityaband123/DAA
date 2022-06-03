# Create list
list_data <- list("Red", "Green", c(21,32,11), TRUE, 51.23, 119.1)
print(list_data)

# Access list
print(list_data[2])

# Change item value
list_data[4] <- "Yellow"
print(list_data[4])

# list length
length(list_data)

# Add list item
append(list_data, "orange")
append(list_data, "orange", after =2)

# Range of List
print(list_data[2:4])

# Loop through list
for(x in list_data){
  print(x)
}

# Join two list
list1 <- list("a", "b", "c")
list2 <- list(1, 2, 3)
list3 <- c(list1, list2)
print(list3)

# Remove 
print(list1[-1])