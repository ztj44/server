//
//  server.h
//  iosEcho
//
//  Created by Zachary Jenkins on 11/9/14.
//  Copyright (c) 2014 Zachary Jenkins. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface server : NSObject

@property (nonatomic, assign, readonly ) NSUInteger     port;   // the actual port bound to, valid after -start

- (BOOL)start;
- (void)stop;


@end
