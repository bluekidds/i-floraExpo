//
//  iFloraExpoAppDelegate.h
//  iFloraExpo
//
//  Created by Fu Chun Hsu on 2010/8/13.
//  Copyright EvangelistVision 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iFloraExpoAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

