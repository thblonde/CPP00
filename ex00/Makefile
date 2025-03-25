NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:%.cpp=obj/%.o)
OBJ_DIR = $(sort $(dir $(OBJ)))

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $@

$(OBJ): obj/%.o: %.cpp | $(OBJ_DIR)
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all