//
//  RootTabBar.h
//  Cloud31-iPhone
//
//  Created by 정의준 on 11. 7. 18..
//  Copyright 2011 KAIST. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface RootTabBar : UITabBar {
    UIImageView *bubble;
}

-(void)setItems;
-(void)tabbarSelected:(int)index;

-(void)updateCount;
-(void)updateTrianglePosition;
@end
