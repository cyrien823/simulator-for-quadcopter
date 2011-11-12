/**
 * @file i2c.h
 * i2c interface
 */
#ifndef _I2C_H
#define _I2C_H

typedef struct i2c_dev_t {
    char *name;
    int addr;
} i2c_dev_t ;
    
int i2c_probe();
int i2c_read();
int i2c_write();


#endif /* _I2C_H */