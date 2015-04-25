//
//  Tweet.h
//  Ejemplo01
//
//  Created by Hansel Ramos Osorio on 4/25/15.
//  Copyright (c) 2015 Hansel Ramos Osorio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tweet : NSObject

@property (strong, nonatomic) NSString *tweetBody;
@property (strong, nonatomic) NSString *name;
@property (nonatomic) NSDate *tweetedAt;
@property (nonatomic) BOOL retweedted;

- (NSInteger) numberOfCharacters;

@end
