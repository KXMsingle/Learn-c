
p720ps.dll: dlldata.obj p720_p.obj p720_i.obj
	link /dll /out:p720ps.dll /def:p720ps.def /entry:DllMain dlldata.obj p720_p.obj p720_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del p720ps.dll
	@del p720ps.lib
	@del p720ps.exp
	@del dlldata.obj
	@del p720_p.obj
	@del p720_i.obj
