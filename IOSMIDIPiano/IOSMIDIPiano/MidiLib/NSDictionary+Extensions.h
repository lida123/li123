#import <Foundation/NSDictionary.h>
#import "Array.h"
#import "IntArray.h"

#import <Foundation/Foundation.h>

@interface NSDictionary (Extensions)

- (NSString *)stringForKey:(id)key;
- (BOOL)boolForKey:(id)key;
- (int)intForKey:(id)key;
- (IntArray *)intArrayForKey:(id)key;
//- ( *)colorForKey:(id)key;
- (Array *)colorsForKey:(id)key;

@end

