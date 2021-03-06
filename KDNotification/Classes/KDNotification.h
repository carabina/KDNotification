//
//  KDNotification.h
//  KDNotification
//
//  Created by Kéké Dandois on 20/09/16.
//  Copyright © 2016 Kéké Dandois. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KDNotification : UIVisualEffectView

+ (instancetype) showWithText:(NSString *)text tapped:(void(^)(KDNotification*))tapped;
+ (instancetype) showWithText:(NSString *)text duration:(NSTimeInterval)duration tapped:(void(^)(KDNotification*))tapped;

- (void) dismiss;

@end
