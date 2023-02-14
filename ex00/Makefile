NAME = animal

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
RM = rm -f

SRC = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
INC = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(INCL)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all 

