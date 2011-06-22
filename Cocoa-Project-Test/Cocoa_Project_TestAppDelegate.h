//
//  Cocoa_Project_TestAppDelegate.h
//  Cocoa-Project-Test
//
//  Created by Malcolm Westley on 6/21/11.
//  Copyright 2011 Old Gruck. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Cocoa_Project_TestAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
