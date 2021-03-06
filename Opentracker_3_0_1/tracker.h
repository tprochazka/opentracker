
  //OpenTracker config
  #define DEBUG 1          //enable debug msg, sent to serial port  

  long led_interval = 1000;    // interval at which to blink status led (milliseconds) 
   
  //default settings (can be overwritten and stored in EEPRom)
  #define INTERVAL 10000       //how often to collect data (milli sec, 600000 - 10 mins)
  #define INTERVAL_SEND 1      //how many times to collect data before sending (times), sending interval interval*interval_send (4 default)
  #define POWERSAVE 0          //enable powersaving (turn off modem, gps on every loop)
  #define KEY "cSQ88qShwC3V"     //key for connection, will be sent with every data transmission
  #define DATA_LIMIT 2500      //current data limit, data collected before sending to remote server can not exceed this
  #define SMS_KEY "pass"       //default password for SMS auth

  #define HOSTNAME "updates.geolink.io"
  #define PROTO "TCP"
  #define HTTP_PORT "80"  
  #define URL "/index.php"   

  #define DEFAULT_APN "internet"  //default APN
  #define DEFAULT_USER "guest"  //default APN user
  #define DEFAULT_PASS "guest"  //default APN pass  

  const char HTTP_HEADER1[ ] = "POST /index.php  HTTP/1.0\r\nHost: updates.geolink.io \r\nContent-type: application/x-www-form-urlencoded\r\nContent-length:";  //HTTP header line before length 
  const char HTTP_HEADER2[ ] = "\r\nUser-Agent:OpenTracker3.0\r\nConnection: close\r\n\r\n";        //HTTP header line after length
  
  
  #define PACKET_SIZE 1400    //TCP data chunk size, modem accept max 1460 bytes per send
  #define PACKET_SIZE_DELIVERY 3000    //in case modem has this number of bytes undelivered, wait till sending new data (3000 bytes default, max sending TCP buffer is 7300)

  #define CONNECT_RETRY 5    //how many time to retry connecting to remote server

  #define STORAGE 1                     //save logs in flash storage
  #define STORAGE_CONFIG_PAGE 1         //flash index to store configuration - just after FIRST_RUN page
  #define STORAGE_FIRST_RUN_PAGE 0      //flash index to store flag for first run - very first page
  #define STORAGE_DATA_START 200        //starting flash index to store logs (200 first bytes reserved for configuration)
  #define STORAGE_DATA_END 262142       //the last possible flash index (max 262143, one last byte must be reserved for marker)
//  #define STORAGE_DATA_END 600       //the last possible flash index (max 262143, one last byte must be reserved for marker)
    
  #define STORAGE_INDEX_CHAR 35         //character used as index separator (ascii 35 = #), data must not have this character
  #define STORAGE_INDEX_SENT_CHAR 64    //character used as index separator indicating sent logs position (ascii 64 = @), data must not have this character  


  
  #define WEBSOCKET 1         //use websockets instead of traditional sending (real time updates and two ways comms) - todo
