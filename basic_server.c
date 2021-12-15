#include "pipe_networking.h"


int main() {

  while(1){
    int to_client;
    int from_client;

    from_client = server_handshake( &to_client );
    
    char *response = malloc(BUFFER_SIZE);
    while(1){
      int fd = read(from_client, response, BUFFER_SIZE);
      //no response
      if (fd == 0) break;
      //process response
      else{
        int i;
        for(i = 0; i < BUFFER_SIZE; i++){
          if(res[i] >= 'a' && res[i] <= 'z'){
            res[i]-= 32;
          }
        }
        write(to_client, response, BUFFER_SIZE);
      }
    }
    printf("Client is disconnected, waiting for a connection.\n")
    
  }
  return 0;
}