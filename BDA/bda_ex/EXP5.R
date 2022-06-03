emp.data <- data.frame(
  emp_id = c(1:5),
  emp_name = c("A","B","C","D","E"),
  salary = c(100,500,800,90,700)
)

str(emp.data)

print(emp.data[2])
print(emp.data["emp_name"])
print(emp.data[[1]])
print(emp.data[["emp_id"]])
print(emp.data$salary) 

emp.data$dept <- c("IT", "CSE","IT", "ELPO","EXTC")
print(emp.data) 

dim(emp.data) 

ncol(emp.data)
length(emp.data)
nrow(emp.data) 

names(emp.data)

rownames(emp.data) 

emp.data2 <- data.frame(
  emp_id= c(6:8),
  emp_name =c("F", "G","H"),
  salary = c(900,500,400),
  dept = c("IT","CSE","MECH") 
)
print(emp.data2)
emp.newdata<-rbind(emp.data,emp.data2)
print(emp.newdata) 


emp.data3 <- data.frame(
  CN1 = c(1:8),
  CN2 = c("w","X","Y", "Z","W","X","Y", "Z")
)
print(emp.data3)
emp.morecolumn <- cbind(emp.newdata, emp.data3)
print(emp.morecolumn)


print(emp.morecolumn$salary)
sort(emp.morecolumn$salary)

max(emp.morecolumn$salary)
min(emp.morecolumn$salary)

which.max(emp.morecolumn$salary)
which.min(emp.morecolumn$salary) 

rownames(emp.morecolumn) [which.max(emp.morecolumn$salary)]
rownames(emp.morecolumn) [which.min(emp.morecolumn$salary)]

