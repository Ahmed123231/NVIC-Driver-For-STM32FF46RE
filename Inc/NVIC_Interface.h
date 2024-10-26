/**
 * @file NVIC_Interface.h
 * @brief Interface for the Nested Vectored Interrupt Controller (NVIC) driver.
 *
 * This file provides the function declarations required to control NVIC functionality
 * for enabling, disabling, setting priority, and managing interrupt states. 
 * All functions follow a consistent API for use with NVIC interrupts.
 *
 * @author Ahmed Atef
 * @date 2024-10-26
 */

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

#include <stdint.h>  /**< Ensure the use of uint32_t data types */

/**
 * @brief Enables the specified IRQ interrupt.
 *
 * Sets the enable bit for the specified IRQ interrupt, allowing it
 * to trigger when activated by an event.
 *
 * @param[in] IRQn  IRQ number to enable of type IRQn_Type.
 */
void NVIC_EnableIRQ(IRQn_Type IRQn);

/**
 * @brief Disables the specified IRQ interrupt.
 *
 * Clears the enable bit for the specified IRQ interrupt, preventing it
 * from triggering until re-enabled.
 *
 * @param[in] IRQn  IRQ number to disable of type IRQn_Type.
 */
void NVIC_DisableIRQ(IRQn_Type IRQn);

/**
 * @brief Sets the pending bit for the specified IRQ interrupt.
 *
 * Forces the specified interrupt to be pending, even if it is not
 * triggered by an external event.
 *
 * @param[in] IRQn  IRQ number to set as pending of type IRQn_Type.
 */
void NVIC_SetPendingIRQ(IRQn_Type IRQn);

/**
 * @brief Clears the pending bit for the specified IRQ interrupt.
 *
 * Clears the pending status of an interrupt, marking it as inactive.
 *
 * @param[in] IRQn  IRQ number to clear as pending of type IRQn_Type.
 */
void NVIC_ClearPendingIRQ(IRQn_Type IRQn);

/**
 * @brief Retrieves the pending state of the specified IRQ interrupt.
 *
 * Returns the pending status of an interrupt, indicating whether it is currently marked as pending.
 *
 * @param[in] IRQn  IRQ number to check of type IRQn_Type.
 * @return uint32_t Returns a non-zero value if the interrupt is pending; 0 otherwise.
 */
uint32_t NVIC_GetPendingIRQ(IRQn_Type IRQn);

/**
 * @brief Sets the priority level for the specified IRQ interrupt.
 *
 * Sets the priority level for the specified IRQ interrupt, where a lower priority value indicates a higher priority.
 *
 * @param[in] IRQn     IRQ number to set the priority for, of type IRQn_Type.
 * @param[in] priority Priority level to set.
 */
void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority);

/**
 * @brief Retrieves the priority level of the specified IRQ interrupt.
 *
 * Returns the priority level of the specified IRQ interrupt.
 *
 * @param[in] IRQn  IRQ number to check of type IRQn_Type.
 * @return uint32_t Returns the priority level of the interrupt.
 */
uint32_t NVIC_GetPriority(IRQn_Type IRQn);

/**
 * @brief Reads the active flag status of the specified IRQ interrupt.
 *
 * Returns whether the specified interrupt is currently active.
 *
 * @param[in] IRQn  IRQ number to check of type IRQn_Type.
 * @return uint32_t Returns a non-zero value if the interrupt is active; 0 otherwise.
 */
uint32_t NVIC_ReadActiveFlag(IRQn_Type IRQn);

#endif /* NVIC_INTERFACE_H */
