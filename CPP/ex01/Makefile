NAME = phonebook

SRC_DIR = src
INC_DIR = include

SRCS = $(SRC_DIR)/Contact.cpp $(SRC_DIR)/Phonebook.cpp $(SRC_DIR)/Main.cpp
OBJS = $(SRCS:.cpp=.o)

CXX= c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
