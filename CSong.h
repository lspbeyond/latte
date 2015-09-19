//
//  CSong.h
//  hello2
//
//  Created by sensi on 15/2/1.
//  Copyright (c) 2015年 sensi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSong : NSObject {
    NSString * name;
    NSString * artist;
}
- (NSString *)name;
- (void)setName:(NSString *)newName;
- (NSString *)artist;
- (void)setArtist:(NSString *)newArtist;
- (id)initWithName:(NSString *)newName artist:(NSString *)newArtist;

@end
