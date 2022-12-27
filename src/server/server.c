#include <fcgiapp.h>

int main() {
FCGX_Request req;
int sockfd = FCGX_OpenSocket("127.0.0.1:8080", 100);
FCGX_Init();
FCGX_InitRequest(&req, sockfd, 0);

while (FCGX_Accept_r(&req) >= 0) {
    FCGX_FPrintF(req.out, "Content-Type: text/html\n\n");
    FCGX_FPrintF(req.out, "<h1><b>hello world</b></h1>");
    FCGX_Finish_r(&req);
}


    return 0;
}