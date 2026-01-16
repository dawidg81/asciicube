# asciicube

A Minecraft Classic/ClassiCube clone written from scratch in C++, reimplemented for terminal screen.

## Build

To build **asciicube** from source, open the 'asciicube.cbp' file with Code::Blocks, then go to "Build > Build" or to immidiately run asciicube after building go to "Build > Build and run".
There may be dangling precompiled object files in the 'Debug' and 'Release' directories, could be built for other system or architecture, so better if you go to "Build > Clean" before building
or do "Build > Rebuild".

## Documentation

For full information on asciicube visit its documentation. Compiled static web files are located in 'docs' directory. Documentation could be also hosted with MkDocs documentation engine.
For static documentation local browsing go to web browser and open 'index.html' located in 'docs/site/' directory. For documentation browsing over HTTP, launch an MkDocs server using
`mkdocs serve` command in 'docs' directory. Then in the browser go to that website (it's usually `http://127.0.0.1:8080/`).
