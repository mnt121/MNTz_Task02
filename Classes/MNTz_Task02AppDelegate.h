//
//  MNTz_Task02AppDelegate.h
//  MNTz_Task02
//
//  Created by uk on 4/7/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MNTz_Task02ViewController;

@interface MNTz_Task02AppDelegate : NSObject <UIApplicationDelegate> 
{
    UIWindow *window;
	MNTz_Task02ViewController *viewController;

}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MNTz_Task02ViewController *viewController;

@end

