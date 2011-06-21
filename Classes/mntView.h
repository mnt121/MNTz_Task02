//
//  mntView.h
//  MNTz_Task02
//
//  Created by uk on 6/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kDefaultStrokeColor         [UIColor redColor]
#define kDefaultStrokeWidth         2.0
#define kDefaultCornerRadius        30.0
	
@interface mntView : UIView 
{
	UIColor     *strokeColor;
	CGFloat     strokeWidth;
	CGFloat     cornerRadius;
}
@property (nonatomic, retain) UIColor *strokeColor;
@property CGFloat strokeWidth;
@property CGFloat cornerRadius;
@end
