FileOpen
========

/!\ Only works with Android at the moment.

FileOpen for OpenFL, lets you open a file with the default application or the app selector

##Use

add FileOpen in haxelib, have a file to open.

Note : you can't open directly a file that is in your assets, but you can first copy it to an user directory and then open it. It works.

Then :

  ```haxe
  FileOpen.openFile("valid file file parh on your device", 'mime type of the file');
  ```

