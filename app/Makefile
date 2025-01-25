FLAGS = -Wall -Wextra
OUTPUT = main
SRC = main.cc Encoder.cc Decoder.cc Channel.cc User.cc
OBJS = $(SRC:.cc=.o)

all: $(OUTPUT)

$(OUTPUT): $(OBJS)
	g++ $(OBJS) -o $(OUTPUT)

%.o: %.cc
	g++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OUTPUT)