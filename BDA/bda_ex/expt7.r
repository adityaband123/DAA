library("rwhatsapp")
library("dplyr")
library("ggplot2")
library("lubridate")

chat <- rwa_read("WhatsApp-Chat.txt")
print(chat)

chat <- chat %>% filter(!is.na(author))
print(chat)

theme_set(theme_minimal())

chat %>%
  mutate(day = date(time)) %>%
  count(day) %>%
  ggplot(aes(x = day, y = n)) +
  geom_bar(stat = "identity") +
  ylab("") + xlab("") +
  ggtitle("Messages per day")

chat %>%
  mutate(day = date(time)) %>%
  count(author) %>%
  ggplot(aes(x = reorder(author, n), y = n)) +
  geom_bar(stat = "identity") +
  ylab("") + xlab("") +
  coord_flip()
  ggtitle("Number of messages")
