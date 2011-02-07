//
//  mangchuAppDelegate.h
//  mangchu
//
//  Created by 맹 주영 on 11. 2. 7..
//  Copyright 2011 한국외국어대학교. All rights reserved.
//

#import <UIKit/UIKit.h>

@class mangchuViewController;

@interface mangchuAppDelegate : NSObject <UIApplicationDelegate> {
@private

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet mangchuViewController *viewController;

@end
