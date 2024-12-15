{ pkgs }: {
	deps = [
   pkgs.cmake
		pkgs.clang
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}