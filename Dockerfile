FROM gcc:latest
COPY . .
RUN gcc -o current_time.out current_time.c
CMD ["./current_time.out"]