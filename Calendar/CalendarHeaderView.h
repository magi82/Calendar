//
//  CalendarHeaderView.h
//  Calendar
//
//  Created by 전수열 on 3/1/15.
//  Copyright (c) 2015 Suyeol Jeon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CalendarHeaderView : UICollectionReusableView

@property (nonatomic, weak) NSDate *date;

+ (CGFloat)height;

@end
