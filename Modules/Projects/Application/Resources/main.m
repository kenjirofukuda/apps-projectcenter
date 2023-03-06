/* 
   Project: $PROJECTNAME$

   Author: $FULLUSERNAME$

   Created: $DATE$ by $USERNAME$
*/

#import <AppKit/AppKit.h>

int 
main(int argc, const char *argv[])
{
// Uncomment if your application is Renaissance application
/*
  ENTER_POOL;
  [NSApplication sharedApplication];
  [NSApp setDelegate: [AppController new]];

  #ifdef GNUSTEP
    [NSBundle loadGSMarkupNamed: @"MainMenu-GNUstep"  owner: [NSApp delegate]];
  #else
    [NSBundle loadGSMarkupNamed: @"MainMenu-OSX"  owner: [NSApp delegate]];
  #endif
   
  LEAVE_POOL;
*/

  return NSApplicationMain (argc, argv);
}

