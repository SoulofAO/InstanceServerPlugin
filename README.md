This code was made at the request of my friend.

This is the simplest Dedicaded Server initialization system in the process, not tied to standard solutions like Steam Lobby. For the most part, the code is an example of the implementation of such a system and requires further development to suit your own situation.

You run a [server](https://github.com/SoulofAO/InstanceServer), the main task of which is to create instances of server builds on the server at the request of the user with a sufficient number of players, and then send requests from the Unreal Engine plugin. The server and plugin has not been properly tested as of March 05, 2025.

At the moment, you are using the Unreal Engine Plugin.

Upload it to the Plugins folder to connect to the Game Folder. 
You can find the plugin settings in Project Settings->Plugins->InstanceServerSettings.
![image](https://github.com/user-attachments/assets/50555b76-3186-4093-9107-bfaba8f0ccd7)

To request the lobby, use SendMapData.
![image](https://github.com/user-attachments/assets/58587c1f-9fbb-4b34-a4e7-5de060b44523)

To get information about the queue and the created lobby, use the QueueUpdateDelegate and NewServerUpdateDelegate delegates.
![image](https://github.com/user-attachments/assets/fd6eb6fb-2e78-4c43-9d36-304fa5bae347)
![image](https://github.com/user-attachments/assets/013ccf08-315f-480b-873c-51f4ebc1d175)
You can find examples in the plugin's Content Folder.
