NAME = account_app

CXX= c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Account.hpp
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp Account.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
