//TCP server iterative: only one client is handled

#include<stdio.h>
#include<sys/socket.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<stdlib.h>
#include<netinet/in.h>

#define PORT 8000
#define MAXSZ 100


main()
{
    int sockfd;//to creat socket
    int newsockfd;//to accept connection
    
    struct sockaddr_in serverAddress;//server recive on this address
    struct sockaddr_in clientAddress;//server sends to client on this server

    int n;
    char msg[MAXSZ];
    int clientAddressLength;
    //creat socket

    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    //initialize the socket address
    memset(&serverAddress,0,sizeof(serverAddress));
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = htonl(INADDR_ANY);
    serverAddress.sin_port = htons(8000); 

    //bind the socket with the server address and port
    bind(socket,(struct sockaddr *)&serverAddress,sizeof(serverAddress));

    //listen for connection from client
    listen(sockfd,5);

    //accept a connnection

    while(1)
    {
        printf("\n--------server waiting for new client connection:----\n");
        clientAddressLength = sizeof(clientAddress);

        newsockfd = accept(sockfd,(struct sockaddr*)&clientAddress,&clientAddressLength);


        //rceive from client
        while(1)
        {
            n = recv(newsockfd,msg,MAXSZ,0);
            if(n==0)
            {
                close(newsockfd);
                break;
            }

            msg[n]=0;
            send(newsockfd,msg,n,0);
            printf("Recive and set:%s\n",msg);
        }//close interior while

    }//close exterior while

    return 0;
}