do{

    string ecmd;
    char *str2;

    rlutil::setColor(9);
    cout << "l0l";
    // Set White Color
    rlutil::setColor(15);
    cout << ":";
    // Set Red Color
    rlutil::setColor(12);
    cout << usetxt;
    rlutil::setColor(9);
    printf(" > ");
    // Set White Color
    rlutil::setColor(15);

    getline( cin, ecmd );
    //char *usecmd = &ecmd[0u];
    //char *usecmd2 = &ecmd[0u];
    char* usecmd = strdup(ecmd.c_str());
    //char* usecmd2 = strdup(ecmd.c_str());

    strtok(usecmd, " ");

    if (strlen(usecmd) == 0 || usecmd[0] == '\r' || usecmd[0] == '\n');

    // Use Commands

    else if(strcmp(usecmd, "back") == 0){
        goto mainConsole;
    }
    else if(strcmp(usecmd, "help") == 0){
        encoderHelp();
    }
    else if (strcmp(usecmd,"exit") == 0){
        closeApp();
    }
    else if(strcmp(usecmd,"os") == 0){

        // Set White Color
        rlutil::setColor(15);

        str2 =  shorter(usecmd,3);

        if(usecmd[3] == '\0'){
            osCommand();
        }else{
            printf("\n");
            system(str2);
        }
        printf("\n");

    }
    else if(strcmp(usecmd, "clear") == 0){
        clear();
    }
    else{
        // Set Red Color
        rlutil::setColor(12);
        printf("[-] Unknown command: %s\n", usecmd);
    }
}while(1);
