CC = gcc
CFLAGS = -g -Wall
TARGET_TEST = test
TARGET = main

test: $(TARGET_TEST)

$(TARGET_TEST): text.o
	$(CC) $(CFLAGS) -o $(TARGET_TEST) text.o

text.o: text.c
	$(CC) $(CFLAGS) -c text.c

all: $(TARGET)
	./$(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o
	#-o: Được sử dụng để chỉ định tên của file đầu ra (output file).

main.o: main.c
	$(CC) $(CFLAGS) -c main.c
	#-c: Được sử dụng để biên dịch mã nguồn thành file đối tượng (object file) mà không liên kết (link) nó thành file thực thi.

clean:
	rm -f $(TARGET) *.o