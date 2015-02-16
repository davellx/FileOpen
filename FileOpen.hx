package;

#if cpp
import cpp.Lib;
#elseif neko
import neko.Lib;
#end

#if (android && openfl)
import openfl.utils.JNI;
#end


class FileOpen {
	
	
	public static function openFile(path:String,type:String) 
	{
		#if (android && openfl)
		
		var resultJNI = fileopen_open_file_jni(path,type);
		
		#end
	}
	
	#if (android && openfl)
	private static var fileopen_open_file_jni = JNI.createStaticMethod ("org.haxe.extension.FileOpen", "openFile", "(Ljava/lang/String;Ljava/lang/String;)V");
	#end
	
	
}