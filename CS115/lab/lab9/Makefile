COMPILER = g++ # or CC if you prefer it on Hercules
FLAGS = -std=c++11

DRIVER = pointers


$(DRIVER) : $(DRIVER).cpp  #the first character on the next line is a tab 
	$(COMPILER) $(FLAGS) -o  $(DRIVER) $(DRIVER).cpp

clean:
	@ /bin/rm -f *.o $(DRIVER)
